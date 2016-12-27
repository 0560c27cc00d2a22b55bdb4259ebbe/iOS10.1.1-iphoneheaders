/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXAppRepresentation.h>

@protocol _GAXAppRepresentationDelegate;
@class AXIPCClient;

@interface _GAXAppRepresentation : AXAppRepresentation {

	BOOL _isSuspended;
	BOOL _gaxClientLoaded;
	BOOL _wasPlayingMedia;
	id<_GAXAppRepresentationDelegate> _delegate;
	unsigned long long _relaunchAttempts;
	AXIPCClient* _appClient;

}

@property (nonatomic,retain) AXIPCClient * appClient;                                                //@synthesize appClient=_appClient - In the implementation block
@property (assign,nonatomic) id<_GAXAppRepresentationDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long relaunchAttempts;                                    //@synthesize relaunchAttempts=_relaunchAttempts - In the implementation block
@property (assign,getter=isGAXClientLoaded,nonatomic) BOOL gaxClientLoaded;                          //@synthesize gaxClientLoaded=_gaxClientLoaded - In the implementation block
@property (getter=isPurpleBuddy,nonatomic,readonly) BOOL purpleBuddy; 
@property (getter=isPreferences,nonatomic,readonly) BOOL preferences; 
@property (getter=isHostedByTheSystemApp,nonatomic,readonly) BOOL hostedByTheSystemApp; 
@property (assign,nonatomic) BOOL wasPlayingMedia;                                                   //@synthesize wasPlayingMedia=_wasPlayingMedia - In the implementation block
-(AXIPCClient *)appClient;
-(BOOL)_hasValidPID;
-(void)setAppClient:(AXIPCClient *)arg1 ;
-(BOOL)isPurpleBuddy;
-(BOOL)wasPlayingMedia;
-(void)setRelaunchAttempts:(unsigned long long)arg1 ;
-(BOOL)isWebApp;
-(BOOL)isGAXClientLoaded;
-(void)setGaxClientLoaded:(BOOL)arg1 ;
-(void)setWasPlayingMedia:(BOOL)arg1 ;
-(void)settingsDidChangeWithServerMode:(unsigned)arg1 allowsMotion:(BOOL)arg2 allowsKeyboardTextInput:(BOOL)arg3 ;
-(id)containedViewsForArchivedFingerPath:(id)arg1 ;
-(BOOL)prepareForTransitionToWorkspaceAndRetrieveRestrictionsInformation:(id*)arg1 ;
-(id)restrictionIdentifiers;
-(void)restrictionWithIdentifier:(id)arg1 didChangeState:(long long)arg2 ;
-(BOOL)isHostedByTheSystemApp;
-(unsigned long long)relaunchAttempts;
-(void)_sendMessageToClient:(id)arg1 replyMessage:(id*)arg2 timeout:(double)arg3 description:(id)arg4 ;
-(BOOL)_setupGAXClientConnection;
-(id)init;
-(void)setDelegate:(id<_GAXAppRepresentationDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<_GAXAppRepresentationDelegate>)delegate;
-(void)suspend;
-(void)resume;
-(BOOL)isPreferences;
-(void)terminate;
@end

