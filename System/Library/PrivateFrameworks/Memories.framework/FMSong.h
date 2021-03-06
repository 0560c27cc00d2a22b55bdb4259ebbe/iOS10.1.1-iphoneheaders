/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FlexSongProtocol;
#import <Memories/Memories-Structs.h>
@class NSObject;

@interface FMSong : NSObject {

	NSObject*<FlexSongProtocol> _flexSong;

}

@property (readonly) NSObject*<FlexSongProtocol> flexSong;              //@synthesize flexSong=_flexSong - In the implementation block
+(id)loadSongsAndArtworkInFolderAtPath:(id)arg1 ;
+(id)loadSongBundleAtPath:(id)arg1 ;
+(long long)versionFromArtworkFilename:(id)arg1 ;
+(id)availableTagIDs;
+(id)localizedNameForTagWithID:(id)arg1 ;
+(BOOL)hasValidTagIDs:(id)arg1 ;
-(id)description;
-(long long)sampleRate;
-(id)uid;
-(id)artwork;
-(id)artistName;
-(SCD_Struct_Mi1)minimumDuration;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg1 ;
-(id)songName;
-(id)assetWithID:(id)arg1 ;
-(void)cancelDownloadOfAllAssetsWithIDs:(id)arg1 ;
-(void)purgeAllLocalCachedAssetsWithIDs:(id)arg1 ;
-(BOOL)canPlay;
-(SCD_Struct_Mi1)naturalDuration;
-(id)renditionForDuration:(SCD_Struct_Mi1)arg1 withOptions:(id)arg2 usePreRenderedFades:(BOOL)arg3 ;
-(id)tagIDs;
-(void)_notifySongAssetsChanged;
-(id)_impl;
-(id)audioEncoderPresetName;
-(void)updateAssets:(id)arg1 ;
-(id)renditionForDuration:(SCD_Struct_Mi1)arg1 withOptions:(id)arg2 usePreRenderedFades:(BOOL)arg3 testingContext:(id)arg4 ;
-(id)initWithFlexSong:(id)arg1 ;
-(void)updateFlexSong:(id)arg1 ;
-(void)updateAsset:(id)arg1 downloadProgress:(double)arg2 ;
-(NSObject*<FlexSongProtocol>)flexSong;
@end

