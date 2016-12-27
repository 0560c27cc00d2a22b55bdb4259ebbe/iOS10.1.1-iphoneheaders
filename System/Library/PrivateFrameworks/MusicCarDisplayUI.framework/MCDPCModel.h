/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
@class NSMapTable, NSObject, NSMutableSet, NSCache, NSString, MCDPCItem;

@interface MCDPCModel : NSObject {

	NSMapTable* _identifiersToItems;
	NSObject*<OS_dispatch_group> _mediaRemoteGroup;
	NSObject*<OS_dispatch_queue> _serialAccessQueue;
	NSObject*<OS_dispatch_queue> _mediaRemoteNotificationQueue;
	NSObject*<OS_dispatch_queue> _imageProcessingQueue;
	unsigned long long _nextAllowedInvalidate;
	unsigned long long _nextAllowedUpdate;
	NSMutableSet* _updatedItems;
	NSCache* _resizedImages;
	BOOL _needsInvalidation;
	NSString* _bundleID;
	MCDPCItem* _rootItem;
	CGSize _imageSize;

}

@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) MCDPCItem * rootItem;                  //@synthesize rootItem=_rootItem - In the implementation block
@property (nonatomic,readonly) NSString * appTitle; 
@property (assign,nonatomic) CGSize imageSize;                        //@synthesize imageSize=_imageSize - In the implementation block
-(void)dealloc;
-(CGSize)imageSize;
-(MCDPCItem *)rootItem;
-(void)_registerNotifications;
-(void)setImageSize:(CGSize)arg1 ;
-(NSString *)bundleID;
-(NSString *)appTitle;
-(void)getRemoteAppIsPlaying:(/*^block*/id)arg1 ;
-(void)initiatePlaybackAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getItemAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_nowPlayingDidChangeNotification:(id)arg1 ;
-(id)containerForRoot;
-(void)_dataSourceInvalidated:(id)arg1 ;
-(void)_contentItemsUpdated:(id)arg1 ;
-(void)_playbackInitiatedNotification:(id)arg1 ;
-(void)_finishLoadingNotification:(id)arg1 ;
-(id)itemsFromMRContentItems:(id)arg1 ;
-(void)_populateImageForItem:(id)arg1 ;
-(void)_beginMediaRemoteAccess;
-(void)_endMediaRemoteAccess;
-(void)_mediaRemoteCommunicationWithIndexPath:(id)arg1 work:(/*^block*/id)arg2 ;
-(void)_performMediaRemoteAccess:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)getChildrenSupportsPlaybackProgressForIndexPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getNowPlayingIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)getCountOfChildrenAtIndexPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getChildrenAtIndexPath:(id)arg1 inRange:(NSRange)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithBundleID:(id)arg1 ;
-(id)imageForIdentifier:(id)arg1 ;
@end

