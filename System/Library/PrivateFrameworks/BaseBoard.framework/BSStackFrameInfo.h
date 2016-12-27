/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BSStackFrameInfo : NSObject {

	unsigned long long _address;
	NSString* _functionName;
	NSString* _className;
	NSString* _executablePath;
	NSString* _realFunctionName;

}

@property (nonatomic,readonly) unsigned long long address;                    //@synthesize address=_address - In the implementation block
@property (nonatomic,retain,readonly) NSString * functionName;                //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain,readonly) NSString * executableName; 
@property (nonatomic,retain,readonly) NSString * executablePath;              //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,retain,readonly) NSString * className;                   //@synthesize className=_className - In the implementation block
-(NSString *)executableName;
-(id)initWithReturnAddress:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)executablePath;
-(NSString *)className;
-(unsigned long long)address;
-(NSString *)functionName;
@end

