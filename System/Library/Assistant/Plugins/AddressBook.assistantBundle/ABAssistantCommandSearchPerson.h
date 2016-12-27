/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAABPersonSearch.h>
#import <AddressBook/ABAssistantCommand.h>
#import <libobjc.A.dylib/ABSearchOperationDelegate.h>

@class NSMutableArray, DADConnection, NSString;

@interface ABAssistantCommandSearchPerson : SAABPersonSearch <ABAssistantCommand, ABSearchOperationDelegate> {

	void* _addressBook;
	NSMutableArray* _peopleFound;
	DADConnection* _connection;

}

@property (nonatomic,retain) DADConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(BOOL)searchForLocalContacts;
-(BOOL)searchForRemoteContacts;
-(BOOL)addABSearchOperationWithPredicate:(id)arg1 toOperationQueue:(id)arg2 ;
-(void)searchForMeContacts;
-(void)dealloc;
-(DADConnection *)connection;
-(void)setConnection:(DADConnection *)arg1 ;
-(id)_validate;
-(id)_perform;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)setAddressBook:(void*)arg1 ;
-(void*)addressBook;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

