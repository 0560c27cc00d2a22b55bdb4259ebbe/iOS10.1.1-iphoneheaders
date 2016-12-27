/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class NSArray, NSString;

@interface CFSGSuggestedContacts : SADomainCommand <SAAceSerializable>

@property (nonatomic,copy) NSArray * suggestContactMatches; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)suggestedContacts;
+(id)suggestedContactsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setSuggestContactMatches:(NSArray *)arg1 ;
-(NSArray *)suggestContactMatches;
@end

