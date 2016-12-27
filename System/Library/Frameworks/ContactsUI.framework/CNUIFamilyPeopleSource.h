/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIPeopleSource.h>

@class CNUIAccountsFacade, CNContactStore, NSArray, AAFamilyDetailsRequest, NSString;

@interface CNUIFamilyPeopleSource : NSObject <CNUIPeopleSource> {

	BOOL _fetching;
	CNUIAccountsFacade* _accountsFacade;
	CNContactStore* _contactStore;
	NSArray* _familyMembers;
	NSArray* _familyContacts;
	AAFamilyDetailsRequest* _familyRequest;

}

@property (nonatomic,retain) CNUIAccountsFacade * accountsFacade;                 //@synthesize accountsFacade=_accountsFacade - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                       //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSArray * familyMembers;                             //@synthesize familyMembers=_familyMembers - In the implementation block
@property (nonatomic,retain) NSArray * familyContacts;                            //@synthesize familyContacts=_familyContacts - In the implementation block
@property (nonatomic,retain) AAFamilyDetailsRequest * familyRequest;              //@synthesize familyRequest=_familyRequest - In the implementation block
@property (assign,nonatomic) BOOL fetching;                                       //@synthesize fetching=_fetching - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sourceKind;
+(id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2 ;
-(id)groups;
-(CNContactStore *)contactStore;
-(id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2 ;
-(CNUIAccountsFacade *)accountsFacade;
-(void)setAccountsFacade:(CNUIAccountsFacade *)arg1 ;
-(void)fetchFamilyMembers;
-(NSArray *)familyContacts;
-(/*^block*/id)familyContactFromFamilyMemberTransformWithKeysToFetch:(id)arg1 ;
-(void)setFamilyContacts:(NSArray *)arg1 ;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(AAFamilyDetailsRequest *)familyRequest;
-(void)setFamilyRequest:(AAFamilyDetailsRequest *)arg1 ;
-(NSArray *)familyMembers;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(BOOL)fetching;
-(void)setFetching:(BOOL)arg1 ;
@end

