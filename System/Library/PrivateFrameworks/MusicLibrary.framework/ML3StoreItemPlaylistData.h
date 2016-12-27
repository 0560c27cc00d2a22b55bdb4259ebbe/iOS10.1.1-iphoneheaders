/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSLookupItem, NSData, NSDictionary;

@interface ML3StoreItemPlaylistData : NSObject {

	SSLookupItem* _lookupItem;
	NSData* _playlistData;
	NSDictionary* _parsedPlaylistImportProperties;

}

@property (nonatomic,readonly) NSData * playlistData; 
@property (nonatomic,readonly) NSDictionary * parsedPlaylistImportProperties; 
-(NSDictionary *)parsedPlaylistImportProperties;
-(id)_playlistPropertiesForLookupItem:(id)arg1 ;
-(id)_playlistPropertiesFromPlaylistData:(id)arg1 ;
-(id)initWithPlaylistData:(id)arg1 ;
-(id)initWithLookupItem:(id)arg1 ;
-(NSData *)playlistData;
@end

