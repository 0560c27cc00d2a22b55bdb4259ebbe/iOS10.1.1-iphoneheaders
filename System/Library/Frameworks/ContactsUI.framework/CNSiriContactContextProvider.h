/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFContextProvider.h>

@class CNContact, CNContactStore;

@interface CNSiriContactContextProvider : NSObject <AFContextProvider> {

	CNContact* _contact;
	CNContactStore* _store;

}
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithContact:(id)arg1 store:(id)arg2 ;
-(void)_removeContextProviderOnMainThread;
-(id)contextManager;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
@end

