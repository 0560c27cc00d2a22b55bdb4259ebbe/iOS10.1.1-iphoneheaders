/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/ChatKitAssistant.assistantBundle/ChatKitAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASmsSearch.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface CKAssistantSearch : SASmsSearch <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)personFromRawAddress:(id)arg1 ;
-(id)abValuesFromPersonInURL:(id)arg1 forProperty:(int)arg2 ;
-(id)_validate;
-(id)_perform;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

