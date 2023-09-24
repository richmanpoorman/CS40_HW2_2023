/* 
 *   Name       : removeBlackEdges.h
 *   Assignment : CS40 Homework 2 (iii)
 *   Purpose    : Removes black edges
 *   Editors    : Matthew Wong (mwong14), Ivi Fung (sfung02)
 */

#include "bit2.h"
#include <stdio.h>

#ifndef UNBLACKEDGE_H_
#define UNBLACKEDGE_H_

/* 
 *  Name:      : RemoveBlackEdges_makeBitmap
 *  Purpose    : Turns the given PBM file bitmap into an Bit2_T bitmap
 *  Parameters : (FILE *) The opened file with the bitmap
 *  Return     : (Bit2_T) A 2D bitmap with the bitmap
 *  Notes      : Will CRE if it is not a bitmap PBM;
 *               Client needs to free the Bit2_T and close the file
 */
Bit2_T RemoveBlackEdges_makeBitmap(FILE* bitmapFile);

/* 
 *  Name:      : RemoveBlackEdges_removeEdges
 *  Purpose    : Removes the 1 bits (black) on the edges,
 *               as well as the 1 bits
 *               adjacent to any of the removed bits
 *  Parameters : (Bit2_T) The bitmap in a Bit2_T before processing 
 *  Return     : None
 *  Notes      : The bitmap is edited in-place
 */
void RemoveBlackEdges_removeEdges(Bit2_T bitmap);

/* 
 *  Name:      : RemoveBlackEdges_writeBitMap
 *  Purpose    : Writes the given bitmap to the given output file
 *               adjacent to any of the removed bits
 *  Parameters : (Bit2_T) The bitmap in a Bit2_T before processing 
 *  Return     : None
 *  Notes      : Assumes the outputFile is open, and the bitmap is processed
 */
void RemoveBlackEdges_writeBitmap(FILE *outputFile, Bit2_T bitmap);

#endif