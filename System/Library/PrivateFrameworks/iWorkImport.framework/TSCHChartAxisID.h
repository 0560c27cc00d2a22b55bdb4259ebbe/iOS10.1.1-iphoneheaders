/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCHChartAxisID : NSObject <NSCopying> {

	int mType;
	unsigned long long mOrdinal;

}

@property (readonly) int type; 
@property (readonly) unsigned long long ordinal; 
+(id)axisIDWithType:(int)arg1 ordinal:(unsigned long long)arg2 ;
-(id)debuggingName;
-(BOOL)intersectsAxisID:(id)arg1 ;
-(id)initWithType:(int)arg1 ordinal:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)ordinal;
-(void)saveToArchive:(ChartAxisIDArchive*)arg1 ;
-(id)initWithArchive:(const ChartAxisIDArchive*)arg1 ;
@end

