/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNiOSPersonFetchRequest;

@interface CNiOSPersonFetcher : NSObject {

	void* _addressBook;
	CNiOSPersonFetchRequest* _fetchRequest;

}
+(id)peopleForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(id)initWithAddressBook:(void*)arg1 fetchRequest:(id)arg2 ;
-(id)fetchPeopleReturningMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(id)fetchPeopleUsingNativeSortReturningMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(BOOL)shouldSortInMemory;
-(id)sortPeople:(id)arg1 ;
-(id)executeFetchRequestWithProgressiveResults:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

