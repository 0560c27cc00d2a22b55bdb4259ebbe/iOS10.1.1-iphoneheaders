/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKPIconPack, NSMapTable, NSLock;

@interface VKIconAtlas : NSObject {

	VKPIconPack* _iconPack;
	GEOGenericContainer<md::IconCacheKey, id, std::__1::hash<md::IconCacheKey>, std::__1::equal_to<md::IconCacheKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _artworkPool;
	NSMapTable* _atlasToImages;
	NSLock* _atlasToImagesLock;

}
-(id)init;
-(void)dealloc;
-(id)artworkForStyleAttributeKey:(unsigned)arg1 value:(unsigned)arg2 style:(VKIconStyleInfo*)arg3 contentScale:(double)arg4 size:(long long)arg5 hasText:(BOOL)arg6 includeFullBleedColor:(BOOL)arg7 ;
-(id)artworkForName:(id)arg1 style:(VKIconStyleInfo*)arg2 contentScale:(double)arg3 size:(long long)arg4 hasText:(BOOL)arg5 includeFullBleedColor:(BOOL)arg6 ;
-(id)initWithIconPack:(id)arg1 ;
-(id)_artworkForBaseImage:(CGImageRef)arg1 additionalImage:(CGImageRef)arg2 fullBleedColor:(CGColorRef)arg3 style:(VKIconStyleInfo*)arg4 contentScale:(double)arg5 hasText:(BOOL)arg6 ;
-(CGColorRef)_newFullBleedColorForName:(id)arg1 contentScale:(double)arg2 ;
-(id)artworkForStyleAttributeKey:(unsigned)arg1 longValue:(unsigned long long)arg2 style:(VKIconStyleInfo*)arg3 contentScale:(double)arg4 size:(long long)arg5 includeFullBleedColor:(BOOL)arg6 ;
-(CGImageRef)_createImageForName:(id)arg1 contentScale:(double)arg2 size:(long long)arg3 ;
-(CGImageRef)_createImageForIconInfo:(id)arg1 contentScale:(double)arg2 ;
@end

