/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUDataSource.h>
#import <libobjc.A.dylib/RadioPushNotificationControllerDelegate.h>

@protocol MCDRadioDataSourceDelegate;
@class NSArray, RadioPushNotificationController, MCDRadioPlaybackCoordinator, NSString;

@interface MCDRadioDataSource : MPUDataSource <RadioPushNotificationControllerDelegate> {

	id<MCDRadioDataSourceDelegate> _delegate;
	NSArray* _featuredStations;
	char _optedInToRadio;
	RadioPushNotificationController* _pushNotificationController;
	NSArray* _stations;
	NSArray* _userStations;
	MCDRadioPlaybackCoordinator* _playbackCoordinator;

}

@property (assign,nonatomic,__weak) id<MCDRadioDataSourceDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * featuredStations; 
@property (getter=isOptedInToRadio,nonatomic,readonly) BOOL optedInToRadio; 
@property (nonatomic,retain) MCDRadioPlaybackCoordinator * playbackCoordinator;              //@synthesize playbackCoordinator=_playbackCoordinator - In the implementation block
@property (nonatomic,readonly) NSArray * stations; 
@property (nonatomic,readonly) NSArray * userStations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isOptedInToRadio;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MCDRadioDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<MCDRadioDataSourceDelegate>)delegate;
-(NSArray *)stations;
-(id)entities;
-(id)initWithEntityType:(long long)arg1 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(NSArray *)featuredStations;
-(NSArray *)userStations;
-(long long)editingTypeForEntityAtIndex:(unsigned long long)arg1 ;
-(id)playbackContextForIndex:(unsigned long long)arg1 ;
-(void)_invalidateCalculatedEntities;
-(void)refreshFeaturedStations;
-(BOOL)isOptedInToRadio;
-(void)_radioRequestDidFinishNotification:(id)arg1 ;
-(void)synchronizeStationsAsAutomaticUpdate:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_deauthenticate;
-(void)_reloadOptedInToRadio;
-(void)deauthenticateIfNecessary;
-(void)_notifyAssistantOfStationChanges;
-(void)pushNotificationControllerDidReceiveSyncRequest:(id)arg1 toGlobalVersion:(unsigned long long)arg2 ;
-(void)checkAcceptedTermsWithCompletionHandler:(/*^block*/id)arg1 ;
-(MCDRadioPlaybackCoordinator *)playbackCoordinator;
-(void)setPlaybackCoordinator:(MCDRadioPlaybackCoordinator *)arg1 ;
@end

