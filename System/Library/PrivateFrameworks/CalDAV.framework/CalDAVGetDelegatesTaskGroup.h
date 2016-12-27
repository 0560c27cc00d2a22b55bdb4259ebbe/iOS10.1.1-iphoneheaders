/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {

	int _state;
	NSMutableArray* _nestedGroupPrincipalURLs;

}

@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * nestedGroupPrincipalURLs;              //@synthesize nestedGroupPrincipalURLs=_nestedGroupPrincipalURLs - In the implementation block
-(int)state;
-(void)setState:(int)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(void)setNestedGroupPrincipalURLs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)nestedGroupPrincipalURLs;
-(void)_getGroupMembershipForURL:(id)arg1 state:(int)arg2 ;
-(void)_expandProperties;
-(void)_getChildProperties;
@end

