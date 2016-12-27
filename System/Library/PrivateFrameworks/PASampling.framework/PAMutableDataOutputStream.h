/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PAOutputStream.h>

@class NSMutableData;

@interface PAMutableDataOutputStream : PAOutputStream {

	NSMutableData* _outputData;

}

@property (nonatomic,readonly) NSMutableData * outputData;              //@synthesize outputData=_outputData - In the implementation block
-(NSMutableData *)outputData;
-(int)printWithFormat:(const char*)arg1 ;
-(id)initWithMutableData:(id)arg1 ;
@end

