/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPCMediaPlayerLegacyPlayer, MPCReportingPlaybackObserver, MPCJinglePlayActivityReportingController;

@interface MPCMediaPlayerLegacyReportingController : NSObject {

	MPCMediaPlayerLegacyPlayer* _player;
	MPCReportingPlaybackObserver* _reportingPlaybackObserver;
	MPCJinglePlayActivityReportingController* _jinglePlayActivityReportingController;

}

@property (assign,nonatomic,__weak) MPCMediaPlayerLegacyPlayer * player;                                                    //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) MPCReportingPlaybackObserver * reportingPlaybackObserver;                                      //@synthesize reportingPlaybackObserver=_reportingPlaybackObserver - In the implementation block
@property (nonatomic,retain) MPCJinglePlayActivityReportingController * jinglePlayActivityReportingController;              //@synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController - In the implementation block
-(void)dealloc;
-(id)initWithPlayer:(id)arg1 ;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_storefrontDidChangeNotification:(id)arg1 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(MPCMediaPlayerLegacyPlayer *)player;
-(void)setPlayer:(MPCMediaPlayerLegacyPlayer *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(MPCReportingPlaybackObserver *)reportingPlaybackObserver;
-(void)setReportingPlaybackObserver:(MPCReportingPlaybackObserver *)arg1 ;
-(MPCJinglePlayActivityReportingController *)jinglePlayActivityReportingController;
-(void)setJinglePlayActivityReportingController:(MPCJinglePlayActivityReportingController *)arg1 ;
-(void)_cloudServiceControllerSubscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_cloudServiceControllerCloudLibraryEnabledDidChangeNotification:(id)arg1 ;
@end

