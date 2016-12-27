/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/MLDDiagnostic.h>

@class NSDate, NSArray, NSError;

@interface MLDMutableDiagnostic : MLDDiagnostic

@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) BOOL locked; 
@property (nonatomic,copy) NSArray * activeClients; 
@property (nonatomic,copy) NSArray * activeXPCTransactions; 
@property (nonatomic,copy) NSArray * databaseFileDiagnostics; 
@property (assign,nonatomic) BOOL writerSuspended; 
@property (nonatomic,copy) NSArray * activeTransactions; 
@property (nonatomic,copy) NSArray * enqueuedConcurrentOperations; 
@property (nonatomic,copy) NSArray * enqueuedSerialOperations; 
@property (nonatomic,retain) NSError * lastImportError; 
@property (nonatomic,copy) NSArray * activeImportOperations; 
@property (nonatomic,copy) NSArray * suspendedImportOperations; 
-(void)setActiveClients:(NSArray *)arg1 ;
-(void)setActiveXPCTransactions:(NSArray *)arg1 ;
-(void)setDatabaseFileDiagnostics:(NSArray *)arg1 ;
-(void)setWriterSuspended:(BOOL)arg1 ;
-(void)setEnqueuedConcurrentOperations:(NSArray *)arg1 ;
-(void)setEnqueuedSerialOperations:(NSArray *)arg1 ;
-(void)setLastImportError:(NSError *)arg1 ;
-(void)setActiveImportOperations:(NSArray *)arg1 ;
-(void)setSuspendedImportOperations:(NSArray *)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setActiveTransactions:(NSArray *)arg1 ;
@end

