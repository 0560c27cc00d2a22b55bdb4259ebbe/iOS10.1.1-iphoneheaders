/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShaderStatement.h>

@class NSString;

@interface TSCH3DShaderRawStatement : NSObject <TSCH3DShaderStatement> {

	NSString* mString;
	TSCH3DShaderType mLinkageType;

}

@property (nonatomic,readonly) NSString * string; 
@property (assign,nonatomic) TSCH3DShaderType linkageType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)statementWithString:(id)arg1 linkageType:(TSCH3DShaderType)arg2 ;
-(void)setLinkageType:(TSCH3DShaderType)arg1 ;
-(TSCH3DShaderType)linkageType;
-(void)setGeneratedForType:(TSCH3DShaderType)arg1 ;
-(id)initWithString:(id)arg1 linkageType:(TSCH3DShaderType)arg2 ;
-(BOOL)isLinked;
-(void)dealloc;
-(NSString *)string;
-(id)resolve;
@end

