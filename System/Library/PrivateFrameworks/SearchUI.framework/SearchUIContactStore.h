/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, NSCache;

@interface SearchUIContactStore : NSObject {

	CNContactStore* _contactStore;
	NSCache* _contactCache;

}

@property (retain) NSCache * contactCache;                     //@synthesize contactCache=_contactCache - In the implementation block
@property (retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
+(id)sharedStore;
+(id)contactForPhoneNumber:(id)arg1 ;
+(id)placeholderContact;
-(id)init;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)cachedContactForIdentifier:(id)arg1 ;
-(void)fetchContactForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setContactCache:(NSCache *)arg1 ;
-(NSCache *)contactCache;
@end

