/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRContext, EAGLContext, NSMutableDictionary, NSMutableSet;

@interface MRImageManager : NSObject {

	MRContext* mBaseContext;
	EAGLContext* mImageGLContext;
	NSMutableDictionary* mTextures;
	NSMutableSet* mAvailableTextures;
	NSMutableSet* mRecyclableTextures;
	NSMutableDictionary* _assetMasters;

}

@property (readonly) MRContext * baseContext; 
@property (readonly) EAGLContext * imageGLContext; 
+(void)cleanupPictureCache;
+(void)initialize;
-(CGImageRef)CGImageWithMoviePath:(id)arg1 withOriginalSize:(CGSize)arg2 forSize:(CGSize)arg3 atTime:(double)arg4 orientation:(char*)arg5 ;
-(void)recycleTexture:(id)arg1 ;
-(CGImageRef)CGImageWithData:(id)arg1 withOriginalSize:(CGSize)arg2 forSize:(CGSize)arg3 orientation:(char*)arg4 ;
-(CGImageRef)CGImageWithPath:(id)arg1 withOriginalSize:(CGSize)arg2 forSize:(CGSize)arg3 orientation:(char*)arg4 ;
-(id)retainedByUserPlayerForAssetAtPath:(id)arg1 size:(CGSize)arg2 andOptions:(id)arg3 ;
-(id)retainedByUserImageWithCGContext:(CGContextRef)arg1 ;
-(EAGLContext *)imageGLContext;
-(MRContext *)baseContext;
-(id)initWithBaseContext:(id)arg1 ;
-(id)fboTextureWithSize:(SCD_Struct_MR7)arg1 ;
-(id)textureWithSize:(SCD_Struct_MR7)arg1 options:(const SCD_Struct_MR8*)arg2 ;
-(id)optimizedPath:(id)arg1 forSize:(CGSize)arg2 ;
-(id)_textureWithSize:(SCD_Struct_MR7)arg1 isFBO:(BOOL)arg2 options:(const SCD_Struct_MR8*)arg3 ;
-(id)retainedByUserImageWithSize:(CGSize)arg1 andColor:(const float*)arg2 ;
-(void)purgeResources:(BOOL)arg1 ;
-(id)_lockedMasterForAssetAtPath:(id)arg1 withOptions:(id)arg2 ;
-(id)retainedByUserThumbnailForAssetAtPath:(id)arg1 ;
-(void)dealloc;
@end

