/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary, NSMutableArray;

@interface AssetModel : NSObject {

	NSLock* m_assetLock;
	NSMutableDictionary* m_assetMap;
	NSMutableArray* m_knownAssets;
	double m_lastAssetsLibraryInvalidationAttempt;

}
+(id)sharedInstance;
+(double)imageScale;
+(id)deviceCharacteristicsDict;
+(id)builtInAssetDirectoryForClipType:(int)arg1 ;
+(id)assetDirectory;
+(double)thumbnailScale;
+(double)maxPixelsForImage:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)pathForBuiltInAssetWithName:(id)arg1 ;
-(void)clearAssetsList;
-(void)invalidateAssetLibrary;
-(void)loadAssetsListIfNeeded;
-(void)mpMediaLibraryDidChange:(id)arg1 ;
-(id)builtInAssetPathsForClipType:(int)arg1 ;
-(id)fileTypesForClipType:(int)arg1 ;
-(id)files:(id)arg1 atPath:(id)arg2 filteredForTypes:(id)arg3 ;
-(id)filterURLs:(id)arg1 fromPaths:(id)arg2 ;
-(id)assetPathsForClipType:(int)arg1 inProjectPath:(id)arg2 excludingURLs:(id)arg3 ;
-(id)assetPathsForRecordedAudio;
-(id)assetPathsForProjectAudio;
-(id)assetPathsForSharedAudio;
-(id)imageViewWithThemeImageNamed:(id)arg1 renderingIntent:(int)arg2 allowProxies:(BOOL)arg3 ;
-(id)ingestMovieAtPath:(id)arg1 intoProject:(id)arg2 asSharedAssets:(BOOL)arg3 ;
@end

