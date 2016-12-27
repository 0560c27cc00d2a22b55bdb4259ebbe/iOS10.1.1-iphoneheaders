/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AKController;

@interface AKActionController : NSObject {

	AKController* _controller;

}

@property (__weak) AKController * controller;              //@synthesize controller=_controller - In the implementation block
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)performActionForSender:(id)arg1 ;
-(BOOL)validateSender:(id)arg1 ;
-(void)performActionForSender:(id)arg1 segment:(long long)arg2 ;
-(BOOL)_isSenderEnabled:(id)arg1 segment:(long long)arg2 ;
-(BOOL)validateSender:(id)arg1 segment:(long long)arg2 ;
-(BOOL)isSenderEnabled:(id)arg1 ;
@end

