/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSString, NSArray, NSDictionary;

@interface NSTask : NSObject

@property (copy) NSString * launchPath; 
@property (copy) NSArray * arguments; 
@property (copy) NSDictionary * environment; 
@property (copy) NSString * currentDirectoryPath; 
@property (retain) id standardInput; 
@property (retain) id standardOutput; 
@property (retain) id standardError; 
@property (readonly) int processIdentifier; 
@property (getter=isRunning,readonly) BOOL running; 
@property (readonly) int terminationStatus; 
@property (readonly) long long terminationReason; 
@property (copy) id terminationHandler; 
@property (assign) long long qualityOfService; 
+(id)currentTaskDictionary;
+(id)launchedTaskWithDictionary:(id)arg1 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSString *)currentDirectoryPath;
-(void)setArguments:(NSArray *)arg1 ;
-(int)terminationStatus;
-(long long)terminationReason;
-(void)launch;
-(void)setCurrentDirectoryPath:(NSString *)arg1 ;
-(void)setLaunchPath:(NSString *)arg1 ;
-(void)interrupt;
-(long long)suspendCount;
-(NSString *)launchPath;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(id)standardInput;
-(id)standardOutput;
-(id)standardError;
-(id)init;
-(NSDictionary *)environment;
-(BOOL)suspend;
-(BOOL)isRunning;
-(BOOL)resume;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(void)setTerminationHandler:(id)arg1 ;
-(int)processIdentifier;
-(id)terminationHandler;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(NSArray *)arguments;
-(void)terminate;
@end

