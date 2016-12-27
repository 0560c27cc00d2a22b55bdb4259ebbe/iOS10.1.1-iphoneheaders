/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSArray, NSString;

@interface SBBreadcrumbState : NSObject <BSDescriptionProviding> {

	NSArray* _breadcrumbIdentifiers;

}

@property (nonatomic,readonly) NSArray * breadcrumbIdentifiers;              //@synthesize breadcrumbIdentifiers=_breadcrumbIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)initialState;
-(id)_initWithIdentifiers:(id)arg1 ;
-(id)_stateWithIdentifiers:(id)arg1 ;
-(id)breadcrumbStateAfterPoppingIdentifier:(id)arg1 ;
-(id)breadcrumbStateAfterPushingIdentifier:(id)arg1 ;
-(id)breadcrumbStateAfterPoppingLastIdentifier;
-(BOOL)containsIdentifer:(id)arg1 ;
-(NSArray *)breadcrumbIdentifiers;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

