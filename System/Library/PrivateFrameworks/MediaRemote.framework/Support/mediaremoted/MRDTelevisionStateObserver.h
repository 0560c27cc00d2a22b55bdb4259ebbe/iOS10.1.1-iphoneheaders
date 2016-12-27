/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MRDTelevisionStateObserverDelegate;
@class NSObject, NSMutableArray, NSData, MRTelevisionNowPlayingState;

@interface MRDTelevisionStateObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _coalescingNowPlayingUpdates;
	BOOL _coalescingArtworkUpdates;
	double _nowPlayingInfoCoalesceDuration;
	double _nowPlayingInfoArtworkCoalesceDuration;
	NSMutableArray* _observedNowPlayingNotifications;
	unsigned _registeredForNowPlayingCount;
	unsigned _registeredForNowPlayingArtworkCount;
	unsigned _registeredForVolumeAvailabilityCount;
	id<MRDTelevisionStateObserverDelegate> _delegate;
	NSData* _artwork;
	NSData* _artworkDigest;
	MRTelevisionNowPlayingState* _state;

}

@property (nonatomic,retain) NSData * artwork;                                             //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSData * artworkDigest;                                       //@synthesize artworkDigest=_artworkDigest - In the implementation block
@property (nonatomic,retain) MRTelevisionNowPlayingState * state;                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) id<MRDTelevisionStateObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stopReceivingUpdatesForSource:(long long)arg1 ;
-(void)setArtworkDigest:(NSData *)arg1 ;
-(void)_setReceiveUpdates:(BOOL)arg1 forSource:(long long)arg2 ;
-(void)_updateArtworkWithNowPlayingInfo:(id)arg1 ;
-(void)nowPlayingState:(/*^block*/id)arg1 ;
-(void)_scheduleNowPlayingUpdate;
-(void)_handleSupportedCommandsDidChange:(id)arg1 ;
-(void)_handleNowPlayingDisplayNameChange:(id)arg1 ;
-(void)_handleNowPlayingPlaybackStateChanged:(id)arg1 ;
-(void)_handleNotificationName:(id)arg1 ;
-(void)_handleNotifications:(id)arg1 ;
-(void)_onQueue_setReceiveNowPlayingUpdates:(BOOL)arg1 ;
-(void)_onQueue_setReceiveArtworkUpdates:(BOOL)arg1 ;
-(void)_onQueue_setReceiveVolumeControlUpdates:(BOOL)arg1 ;
-(void)_addNowPlayingNotification:(id)arg1 selector:(SEL)arg2 ;
-(void)_handleNowPlayingDisplayIDChange:(id)arg1 ;
-(void)_handleNowPlayingInfoChanged:(id)arg1 ;
-(void)_removeNowPlayingNotifications;
-(id)_digest:(id)arg1 ;
-(void)_scheduleArtworkUpdate;
-(void)_pushNowPlayingStateUpdate;
-(void)_pushArtworkUpdate;
-(void)beginReceivingUpdatesForSource:(long long)arg1 ;
-(void)nowPlayingArtwork:(/*^block*/id)arg1 ;
-(NSData *)artworkDigest;
-(id)init;
-(void)setDelegate:(id<MRDTelevisionStateObserverDelegate>)arg1 ;
-(void)dealloc;
-(id<MRDTelevisionStateObserverDelegate>)delegate;
-(MRTelevisionNowPlayingState *)state;
-(void)setState:(MRTelevisionNowPlayingState *)arg1 ;
-(NSData *)artwork;
-(void)setArtwork:(NSData *)arg1 ;
-(void)_handleNotification:(id)arg1 ;
@end

