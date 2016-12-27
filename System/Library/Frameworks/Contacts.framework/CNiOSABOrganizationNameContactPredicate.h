/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContactPredicate.h>

@class NSString;

@interface CNiOSABOrganizationNameContactPredicate : CNPredicate <CNiOSContactPredicate> {

	NSString* _organizationName;

}

@property (nonatomic,copy,readonly) NSString * organizationName;              //@synthesize organizationName=_organizationName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(CFArrayRef)cn_copyPeopleInAddressBook:(void*)arg1 withSortOrder:(unsigned)arg2 matchInfos:(id*)arg3 options:(unsigned long long)arg4 error:(_CFError*)arg5 ;
-(BOOL)cn_supportsNativeSorting;
-(id)initWithOrganizationName:(id)arg1 ;
-(NSString *)organizationName;
@end

