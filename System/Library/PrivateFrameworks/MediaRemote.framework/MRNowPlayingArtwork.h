/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRNowPlayingArtwork : NSObject

@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) BOOL hasArtworkData; 
+(id)createNowPlayingArtworkFromXPCDictionary:(id)arg1 ;
-(unsigned)type;
-(BOOL)hasArtworkData;
-(void)bindToXPCDictionary:(id)arg1 ;
-(id)copyImageData;
@end

