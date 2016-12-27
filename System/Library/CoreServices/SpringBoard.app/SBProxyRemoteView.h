/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol SBProxyRemoteViewDelegate;
@class SBApplication, NSString;

@interface SBProxyRemoteView : UIView {

	id<SBProxyRemoteViewDelegate> _delegate;
	SBApplication* _app;
	NSString* _remoteViewIdentifier;
	BOOL _remoteViewOpaque;
	NSString* _hostRequester;

}

@property (nonatomic,retain) NSString * remoteViewIdentifier;                            //@synthesize remoteViewIdentifier=_remoteViewIdentifier - In the implementation block
@property (assign,nonatomic) BOOL remoteViewOpaque;                                      //@synthesize remoteViewOpaque=_remoteViewOpaque - In the implementation block
@property (assign,nonatomic,__weak) id<SBProxyRemoteViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)layerClass;
-(void)setRemoteViewIdentifier:(NSString *)arg1 ;
-(void)_setIsConnected:(BOOL)arg1 ;
-(void)connectToContextID:(unsigned)arg1 forIdentifier:(id)arg2 application:(id)arg3 ;
-(void)noteConnectionLost;
-(BOOL)remoteViewOpaque;
-(id)init;
-(void)setDelegate:(id<SBProxyRemoteViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SBProxyRemoteViewDelegate>)delegate;
-(void)didMoveToSuperview;
-(void)setRemoteViewOpaque:(BOOL)arg1 ;
-(NSString *)remoteViewIdentifier;
-(void)disconnect;
@end

