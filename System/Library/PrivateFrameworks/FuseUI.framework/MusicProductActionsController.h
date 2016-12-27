/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@class MusicProductActionsTemplateViewElement, NSDictionary, MusicClientContext, NSString, SKUIClientContext;

@interface MusicProductActionsController : NSObject <MusicClientContextConsuming> {

	MusicProductActionsTemplateViewElement* _templateViewElement;
	NSDictionary* _extraInfo;
	MusicClientContext* _clientContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithTemplateViewElement:(id)arg1 clientContext:(id)arg2 extraInfo:(id)arg3 ;
-(void)presentContextualActionsWithModalController:(id)arg1 productEntityValueProviderData:(id)arg2 modalSourceViewProvider:(id)arg3 ;
@end

