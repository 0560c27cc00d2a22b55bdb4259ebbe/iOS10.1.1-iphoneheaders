/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYChangeTracking.h>

@class NSDictionary, SYLegacyStore, NSMutableArray, NSString;

@interface SYTransaction : NSObject <SYChangeTracking> {

	AB _inTransaction;
	NSDictionary* _contextInfo;
	NSDictionary* _idsOptions;
	/*^block*/id _completion;
	SYLegacyStore* _store;
	NSMutableArray* _changes;

}

@property (nonatomic,retain) SYLegacyStore * store;                 //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSMutableArray * changes;              //@synthesize changes=_changes - In the implementation block
@property (nonatomic,copy) NSDictionary * contextInfo;              //@synthesize contextInfo=_contextInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * idsOptions;               //@synthesize idsOptions=_idsOptions - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStore:(id)arg1 ;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)commit;
-(void)rollback;
-(NSDictionary *)contextInfo;
-(void)setContextInfo:(NSDictionary *)arg1 ;
-(void)setIdsOptions:(NSDictionary *)arg1 ;
-(void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(id)changeList;
-(NSDictionary *)idsOptions;
-(void)addObject:(id)arg1 context:(id)arg2 ;
-(void)updateObject:(id)arg1 context:(id)arg2 ;
-(void)deleteObject:(id)arg1 context:(id)arg2 ;
-(void)addObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)commitBlocking:(BOOL)arg1 reportError:(/*^block*/id)arg2 ;
-(void)_transactionDidComplete:(BOOL)arg1 ;
-(NSMutableArray *)changes;
-(BOOL)_beginTransaction;
-(BOOL)_endTransaction;
-(void)setChanges:(NSMutableArray *)arg1 ;
-(void)deleteObject:(id)arg1 ;
-(void)updateObject:(id)arg1 ;
-(void)setStore:(SYLegacyStore *)arg1 ;
-(SYLegacyStore *)store;
@end

