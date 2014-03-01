#include "StdAfx.h"

WRAPPER RwTexDictionary* RwTexDictionaryGetCurrent() { EAXJMP(0x7F3A90); }
WRAPPER RwTexDictionary* RwTexDictionaryCreate() { EAXJMP(0x7F3600); }
WRAPPER RwTexDictionary* RwTexDictionarySetCurrent(RwTexDictionary* dict) { WRAPARG(dict); EAXJMP(0x7F3A70); }
WRAPPER RpClump* RpClumpForAllAtomics(RpClump* clump, RpAtomicCallBack callback, void* pData) { WRAPARG(clump); WRAPARG(callback); WRAPARG(pData); EAXJMP(0x749B70); }
WRAPPER RpGeometry* RpGeometryForAllMaterials(RpGeometry* geometry, RpMaterialCallBack fpCallBack, void* pData) { WRAPARG(geometry); WRAPARG(fpCallBack); WRAPARG(pData); EAXJMP(0x74C790); }
WRAPPER RwTexture* RwTextureCreate(RwRaster* raster) { WRAPARG(raster); EAXJMP(0x7F37C0); }
WRAPPER RwTexture* RwTextureRead(const RwChar* name, const RwChar* maskName) { WRAPARG(name); WRAPARG(maskName); EAXJMP(0x7F3AC0); }
WRAPPER RwBool RwTextureDestroy(RwTexture* texture) { WRAPARG(texture); EAXJMP(0x7F3820); }
WRAPPER RwTexture* RwTextureSetRaster(RwTexture* texture, RwRaster* raster) { WRAPARG(texture); WRAPARG(raster); EAXJMP(0x7F35D0); }
WRAPPER RwTexture* RwTextureSetName(RwTexture* texture, const RwChar* name) { WRAPARG(texture); WRAPARG(name); EAXJMP(0x7F38A0); }
WRAPPER RwRaster* RwRasterCreate(RwInt32 width, RwInt32 height, RwInt32 depth, RwInt32 flags) { WRAPARG(width); WRAPARG(height); WRAPARG(depth); WRAPARG(flags); EAXJMP(0x7FB230); }
WRAPPER RwBool RwRasterDestroy(RwRaster* raster) { WRAPARG(raster); EAXJMP(0x7FB020); }
WRAPPER RwUInt8* RwRasterLock(RwRaster* raster, RwUInt8 level, RwInt32 lockMode) { WRAPARG(raster); WRAPARG(level); WRAPARG(lockMode); EAXJMP(0x7FB2D0); }
WRAPPER RwRaster* RwRasterUnlock(RwRaster* raster) { WRAPARG(raster); EAXJMP(0x7FAEC0); }
WRAPPER RwRaster* RwRasterSetFromImage(RwRaster* raster, RwImage* image) { WRAPARG(raster); WRAPARG(image); EAXJMP(0x804290); }
WRAPPER RpClump* RpClumpAddAtomic(RpClump* clump, RpAtomic* atomic) { WRAPARG(clump); WRAPARG(atomic); EAXJMP(0x74A490); }
WRAPPER RwFrame* RwFrameSetIdentity(RwFrame* frame) { WRAPARG(frame); EAXJMP(0x7F10B0); }
WRAPPER RpClump* RpClumpCreate() { EAXJMP(0x74A290); }
WRAPPER RwCamera* RwCameraClear(RwCamera* camera, RwRGBA* colour, RwInt32 clearMode) { WRAPARG(camera); WRAPARG(colour); WRAPARG(clearMode); EAXJMP(0x7EE340); }
WRAPPER RwBool RwImageDestroy(RwImage* image) { WRAPARG(image); EAXJMP(0x802740); }
WRAPPER RwImage* RwImageFindRasterFormat(RwImage* ipImage, RwInt32 nRasterType, RwInt32* npWidth, RwInt32* npHeight, RwInt32* npDepth, RwInt32* npFormat) { WRAPARG(ipImage); WRAPARG(nRasterType); WRAPARG(npWidth); WRAPARG(npHeight); WRAPARG(npDepth); WRAPARG(npFormat); EAXJMP(0x8042C0); }
WRAPPER RwImage* RtPNGImageRead(const RwChar* imageName) { WRAPARG(imageName); EAXJMP(0x7CF9B0); }
WRAPPER RwBool RwFrameDestroy(RwFrame* frame) { WRAPARG(frame); EAXJMP(0x7F05A0); }
WRAPPER RwBool RpAtomicDestroy(RpAtomic* atomic) { WRAPARG(atomic); EAXJMP(0x749DC0); }
WRAPPER RwFrame* RwFrameForAllObjects(RwFrame* frame, RwObjectCallBack callBack, void* data) { WRAPARG(frame); WRAPARG(callBack); WRAPARG(data); EAXJMP(0x7F1200); }
WRAPPER RwCamera* RwCameraCreate() { EAXJMP(0x7EE4F0); }
WRAPPER RwFrame* RwFrameCreate() { EAXJMP(0x7F0410); }
WRAPPER RwCamera* RwCameraSetViewWindow(RwCamera* camera, const RwV2d* viewWindow) { WRAPARG(camera); WRAPARG(viewWindow); EAXJMP(0x7EE410); }
WRAPPER RwCamera* RwCameraSetProjection(RwCamera* camera, RwCameraProjection projection) { WRAPARG(camera); WRAPARG(projection); EAXJMP(0x7EE3A0); }
WRAPPER void* RwIm3DTransform(RwIm3DVertex* pVerts, RwUInt32 numVerts, RwMatrix* ltm, RwUInt32 flags) { WRAPARG(pVerts); WRAPARG(numVerts); WRAPARG(ltm); WRAPARG(flags); EAXJMP(0x7EF450); }
WRAPPER RwBool RwIm3DRenderIndexedPrimitive(RwPrimitiveType primType, RwImVertexIndex* indices, RwInt32 numIndices) { WRAPARG(primType); WRAPARG(indices); WRAPARG(numIndices); EAXJMP(0x7EF550); }
WRAPPER RwBool RwIm3DRenderLine(RwInt32 vert1, RwInt32 vert2) { WRAPARG(vert1); WRAPARG(vert2); EAXJMP(0x7EF900); }
WRAPPER RwBool RwIm3DEnd() { EAXJMP(0x7EF520); }
WRAPPER void _rwObjectHasFrameSetFrame(void* object, RwFrame* frame) { WRAPARG(object); WRAPARG(frame); EAXJMP(0x804EF0); }

WRAPPER void DoRWStuffEndOfFrame() { EAXJMP(0x53D840); }

RwCamera* RwCameraBeginUpdate(RwCamera* camera)
{
	return camera->beginUpdate(camera);
}

RwCamera* RwCameraEndUpdate(RwCamera* camera)
{
	return camera->endUpdate(camera);
}