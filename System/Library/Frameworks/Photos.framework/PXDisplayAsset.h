/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXDisplayAsset <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) double duration; 
@optional
-(double)duration;

@required
-(unsigned long long)mediaType;
-(BOOL)isFavorite;
-(unsigned long long)mediaSubtypes;
-(unsigned long long)isContentEqualTo:(id)arg1;

@end

