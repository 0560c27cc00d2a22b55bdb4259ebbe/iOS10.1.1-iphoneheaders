/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSDeveloperServiceProtocol.h>

@class NSString;

@interface VSMockDeveloperService : NSObject <VSDeveloperServiceProtocol> {

	/*^block*/id _fetchBlock;
	/*^block*/id _addBlock;
	/*^block*/id _updateBlock;
	/*^block*/id _removeBlock;

}

@property (nonatomic,copy) id fetchBlock;                           //@synthesize fetchBlock=_fetchBlock - In the implementation block
@property (nonatomic,copy) id addBlock;                             //@synthesize addBlock=_addBlock - In the implementation block
@property (nonatomic,copy) id updateBlock;                          //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id removeBlock;                          //@synthesize removeBlock=_removeBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fetchBlock;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)addBlock;
-(id)removeBlock;
-(void)fetchDeveloperIdentityProvidersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFetchBlock:(id)arg1 ;
-(void)setAddBlock:(id)arg1 ;
-(void)setRemoveBlock:(id)arg1 ;
@end

