/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DDataBuffer : NSObject

@property (nonatomic,readonly) unsigned long long componentByteSize; 
@property (nonatomic,readonly) unsigned long long elementByteSize; 
@property (nonatomic,readonly) unsigned long long byteSize; 
@property (nonatomic,readonly) tvec3<int> size; 
@property (nonatomic,readonly) tvec2<int> size2; 
@property (nonatomic,readonly) BOOL hasLevels; 
-(unsigned long long)byteSize;
-(unsigned long long)elementByteSize;
-(unsigned long long)componentByteSize;
-(DataBufferLevelData*)dataAtLevel:(unsigned long long)arg1 ;
-(tvec2<int>)size2;
-(DataBufferInfo)bufferInfo;
-(DataBufferLevelData*)dataWithSizeGreaterOrEqualTo:(unsigned long long)arg1 ;
-(tvec3<int>)size;
-(id)description;
-(BOOL)hasLevels;
@end

