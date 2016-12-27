/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFDomainObjectClearing.h>
#import <AddressBook/ABAssistantCommand.h>

@class NSString;

@interface ABAssistantCommandClear : NSObject <AFDomainObjectClearing, ABAssistantCommand> {

	void* _addressBook;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(void)clearAceDomainObjects;
-(void)dealloc;
-(void)setAddressBook:(void*)arg1 ;
-(void*)addressBook;
@end

