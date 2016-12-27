/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, BKSDisplayRenderOverlayDescriptor, NSURL;

@interface SBRestartTransitionRequest : NSObject <BSDescriptionProviding> {

	NSString* _requester;
	NSString* _reason;
	int _restartType;
	double _delay;
	BOOL _wantsPersistentSnapshot;
	BKSDisplayRenderOverlayDescriptor* _customOverlayDescriptor;
	NSURL* _applicationLaunchURL;

}

@property (nonatomic,copy) NSString * requester;                                                     //@synthesize requester=_requester - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                        //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) int restartType;                                                        //@synthesize restartType=_restartType - In the implementation block
@property (assign,nonatomic) double delay;                                                           //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) BOOL wantsPersistentSnapshot;                                           //@synthesize wantsPersistentSnapshot=_wantsPersistentSnapshot - In the implementation block
@property (nonatomic,copy) BKSDisplayRenderOverlayDescriptor * customOverlayDescriptor;              //@synthesize customOverlayDescriptor=_customOverlayDescriptor - In the implementation block
@property (nonatomic,copy) NSURL * applicationLaunchURL;                                             //@synthesize applicationLaunchURL=_applicationLaunchURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequester:(id)arg1 reason:(id)arg2 ;
-(void)setWantsPersistentSnapshot:(BOOL)arg1 ;
-(void)setCustomOverlayDescriptor:(BKSDisplayRenderOverlayDescriptor *)arg1 ;
-(BOOL)wantsPersistentSnapshot;
-(BKSDisplayRenderOverlayDescriptor *)customOverlayDescriptor;
-(NSURL *)applicationLaunchURL;
-(void)setApplicationLaunchURL:(NSURL *)arg1 ;
-(id)init;
-(NSString *)description;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(NSString *)reason;
-(NSString *)requester;
-(void)setRequester:(NSString *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(int)restartType;
-(void)setRestartType:(int)arg1 ;
@end

