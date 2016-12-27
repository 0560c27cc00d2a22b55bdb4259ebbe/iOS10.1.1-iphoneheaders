/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/MFMessageContextDelegate.h>
#import <libobjc.A.dylib/_MFMessageComposeExtensionProtocol.h>

@class _MFMessageContext, NSString;

@interface _MFMessageAppExtensionContext : NSExtensionContext <MFMessageContextDelegate, _MFMessageComposeExtensionProtocol> {

	_MFMessageContext* _messageContext;

}

@property (nonatomic,retain) _MFMessageContext * messageContext;              //@synthesize messageContext=_messageContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)viewController;
-(void)_startComposingMessageWithInput:(id)arg1 ;
-(void)_cancelComposingMessage;
-(void)stageAppItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stageMediaItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)remoteProxy;
-(void)setMessageContext:(_MFMessageContext *)arg1 ;
-(_MFMessageContext *)messageContext;
@end

