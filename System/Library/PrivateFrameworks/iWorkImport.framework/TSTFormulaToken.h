/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, TSCEFunctionArgumentSpec;


@protocol TSTFormulaToken
@property (nonatomic,readonly) int tokenType; 
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,retain,readonly) TSCEFunctionArgumentSpec * argumentSpec; 
@required
-(TSCEFunctionArgumentSpec *)argumentSpec;
-(NSString *)string;
-(int)tokenType;

@end

