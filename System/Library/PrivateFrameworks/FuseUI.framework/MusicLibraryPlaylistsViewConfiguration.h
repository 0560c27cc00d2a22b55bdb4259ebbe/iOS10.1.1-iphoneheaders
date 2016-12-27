/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@class NSMutableSet, NSString, NSNumber, NSSet;

@interface MusicLibraryPlaylistsViewConfiguration : MusicLibraryBrowseTableViewConfiguration {

	NSMutableSet* _additionalQueryFilterPredicates;
	BOOL _playlistsFilterIsCuratorID;
	unsigned long long _playlistsConfigurationOptions;
	NSString* _playlistsFilter;
	NSNumber* _parentFolderPersistentID;

}

@property (assign,nonatomic) unsigned long long playlistsConfigurationOptions;              //@synthesize playlistsConfigurationOptions=_playlistsConfigurationOptions - In the implementation block
@property (nonatomic,copy) NSString * playlistsFilter;                                      //@synthesize playlistsFilter=_playlistsFilter - In the implementation block
@property (nonatomic,retain) NSNumber * parentFolderPersistentID;                           //@synthesize parentFolderPersistentID=_parentFolderPersistentID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * additionalQueryFilterPredicates; 
+(void)getDetailViewController:(id*)arg1 playbackContext:(id*)arg2 forEntityValueContext:(id)arg3 sourceViewController:(id)arg4 ;
-(id)init;
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(BOOL)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2 ;
-(void)setPlaylistsFilter:(NSString *)arg1 ;
-(void)_handleDeletionOfEntityValueProvider:(id)arg1 ;
-(void)_updatePlaylistsFilterIsCuratorIDStatus;
-(id)folderDetailViewControllerWithEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(void)setParentFolderPersistentID:(NSNumber *)arg1 ;
-(void)addQueryFilterPredicate:(id)arg1 ;
-(BOOL)canDeleteEntityValueContext:(id)arg1 ;
-(void)applyEntityProviderChangeRecords:(id)arg1 ;
-(long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4 ;
-(void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2 ;
-(NSSet *)additionalQueryFilterPredicates;
-(unsigned long long)playlistsConfigurationOptions;
-(void)setPlaylistsConfigurationOptions:(unsigned long long)arg1 ;
-(NSString *)playlistsFilter;
-(NSNumber *)parentFolderPersistentID;
@end

