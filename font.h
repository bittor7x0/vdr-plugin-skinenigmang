/*
 * font.h: 'EnigmaNG' skin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 * Taken from GraphTFT 
 */

#ifndef VDR__GRAPHTFTFONT_H
#define VDR__GRAPHTFTFONT_H

#include "common.h"

#include <map>
#include <vector>
#include <ft2build.h>
#include FT_FREETYPE_H
#include <vdr/font.h>
#include <vdr/config.h>

using std::map;
using std::string;
using std::vector;


class cGraphtftFont
{
private:
	typedef map<string,cFont*> cache_map;
	typedef map<string,cFont::tPixelData*> del_map;
	
public:
	cGraphtftFont();
	~cGraphtftFont();

	bool Load(string Filename, string CacheName, int Size, int Language = 0, int Width = 0, int Format = 0);
	const cFont* GetFont(string CacheName);
	void Clear(string CacheName);
	void Clear();

private:
	FT_Library		_library;
	FT_Face			_face;
	FT_GlyphSlot		_slot;
	cache_map 		_cache;
	del_map			_del;

};

#endif // VDR__GRAPHTFTFONT_H
