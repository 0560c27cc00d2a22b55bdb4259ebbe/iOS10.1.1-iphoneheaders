/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_MSMessageComposeExtensionProtocol.h>

@class MSConversation, NSMapTable, NSString;

@interface _MSMessageAppExtensionContext : NSExtensionContext <_MSMessageComposeExtensionProtocol> {

	MSConversation* _activeConversation;
	unsigned long long _presentationStyle;
	NSMapTable* _conversationsByIdentifier;
	CFRunLoopObserverRef _principalObjectCreationObserver;
	CGRect _initialFrameOfHostView;

}

@property (assign,nonatomic) unsigned long long presentationStyle;                                //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) MSConversation * activeConversation;                                 //@synthesize activeConversation=_activeConversation - In the implementation block
@property (nonatomic,readonly) NSMapTable * conversationsByIdentifier;                            //@synthesize conversationsByIdentifier=_conversationsByIdentifier - In the implementation block
@property (nonatomic,readonly) CGRect initialFrameOfHostView;                                     //@synthesize initialFrameOfHostView=_initialFrameOfHostView - In the implementation block
@property (nonatomic,readonly) CFRunLoopObserverRef principalObjectCreationObserver;              //@synthesize principalObjectCreationObserver=_principalObjectCreationObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
+(id)activeExtensionContext;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)dealloc;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPresentationStyle:(unsigned long long)arg1 ;
-(unsigned long long)presentationStyle;
-(id)viewController;
-(void)dismiss;
-(void)_resignActive;
-(void)stageAppItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stageMediaItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginDisablingUserInteraction;
-(void)endDisablingUserInteraction;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 ;
-(void)dismissToKeyboard:(BOOL)arg1 ;
-(id)remoteProxy;
-(void)requestPresentationStyle:(unsigned long long)arg1 ;
-(void)_remoteViewDidBecomeReadyForDisplay;
-(MSConversation *)activeConversation;
-(void)setActiveConversation:(MSConversation *)arg1 ;
-(void)_installPrincipalObjectObserver;
-(void)_uninstallPrincipalObjectObserverIfNeeded;
-(CGRect)initialFrameOfHostView;
-(id)updatedConversationForConversationState:(id)arg1 ;
-(void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2 ;
-(void)_conversationDidChangeWithConversationState:(id)arg1 ;
-(void)_presentationWillChangeToPresentationState:(id)arg1 ;
-(void)_presentationDidChangeToPresentationState:(id)arg1 ;
-(void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2 ;
-(void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2 ;
-(void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2 ;
-(void)_requestSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)_hostDidBeginDeferredTeardown;
-(void)_handlePrincipalObjectCreated;
-(void)stageRichLink:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDragMediaItem:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSMapTable *)conversationsByIdentifier;
-(CFRunLoopObserverRef)principalObjectCreationObserver;
@end

