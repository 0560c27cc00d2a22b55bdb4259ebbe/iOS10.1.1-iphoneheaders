/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSData, NSArray, NSObject, NSString, StoreDownload, NSDictionary;

@interface IPodLibraryItem : NSObject <NSCopying> {

	NSMutableDictionary* _additionalEntityProperties;
	long long _assetType;
	NSData* _artworkData;
	NSArray* _chapters;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _downloadIdentifier;
	long long _downloadType;
	double _durationInSeconds;
	long long _libraryPersistentIdentifier;
	NSString* _mediaPath;
	StoreDownload* _metadata;
	long long _protectionType;
	long long _updateType;

}

@property (assign) long long assetType; 
@property (copy) NSArray * chapters; 
@property (getter=isDownloading,readonly) BOOL downloading; 
@property (assign) double durationInSeconds; 
@property (assign) long long downloadType; 
@property (copy) NSString * itemDownloadIdentifier; 
@property (assign) long long libraryPersistentIdentifier; 
@property (readonly) BOOL hasItemArtwork; 
@property (copy) NSData * itemArtworkData; 
@property (copy) NSString * itemMediaPath; 
@property (assign) long long protectionType; 
@property (copy) StoreDownload * itemMetadata; 
@property (assign) long long updateType; 
@property (copy) NSDictionary * additionalEntityProperties; 
+(unsigned)mediaTypeForStoreDownload:(id)arg1 ;
-(long long)libraryPersistentIdentifier;
-(void)setLibraryPersistentIdentifier:(long long)arg1 ;
-(void)setDownloadType:(long long)arg1 ;
-(void)setItemMetadata:(StoreDownload *)arg1 ;
-(void)setItemDownloadIdentifier:(NSString *)arg1 ;
-(NSString *)itemMediaPath;
-(void)setItemArtworkData:(NSData *)arg1 ;
-(StoreDownload *)itemMetadata;
-(NSData *)itemArtworkData;
-(NSString *)itemDownloadIdentifier;
-(id)_copyChapterVideoTracksForAsset:(id)arg1 ;
-(NSDictionary *)additionalEntityProperties;
-(long long)downloadType;
-(BOOL)hasItemArtwork;
-(void)loadPropertiesFromMediaPath:(id)arg1 ;
-(void)setAdditionalEntityProperties:(NSDictionary *)arg1 ;
-(void)setItemMediaPath:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forAdditionalEntityProperty:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAssetType:(long long)arg1 ;
-(double)durationInSeconds;
-(NSArray *)chapters;
-(long long)protectionType;
-(void)setProtectionType:(long long)arg1 ;
-(void)setChapters:(NSArray *)arg1 ;
-(long long)updateType;
-(long long)assetType;
-(BOOL)isDownloading;
-(void)setUpdateType:(long long)arg1 ;
-(void)setDurationInSeconds:(double)arg1 ;
@end

