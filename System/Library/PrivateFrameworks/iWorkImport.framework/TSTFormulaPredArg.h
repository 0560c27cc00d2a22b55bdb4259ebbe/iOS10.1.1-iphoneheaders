/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSDate, NSString;

@interface TSTFormulaPredArg : NSObject <NSCopying> {

	int _type;
	id _objcData;
	TSCECellRef _cellRef;
	TSCERelativeCellRef _relativeCellRef;
	BOOL _hasRelativeCellRef;
	SCD_Union_TS646 _union;

}

@property (nonatomic,readonly) int type;                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,retain) NSNumber * number; 
@property (assign,nonatomic) double numberValue; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,copy) NSString * string; 
@property (assign,nonatomic) BOOL columnIsAbsolute; 
@property (assign,nonatomic) BOOL rowIsAbsolute; 
@property (nonatomic,readonly) BOOL hasRelativeCellRef;              //@synthesize hasRelativeCellRef=_hasRelativeCellRef - In the implementation block
@property (assign,nonatomic) double durationValue; 
@property (assign,nonatomic) int durationUnits; 
+(id)defaultPredicateArg;
-(const TSCECellRef*)cellRef;
-(void)setCellRef:(const TSCECellRef*)arg1 ;
-(void)setRelativeCellRef:(const TSCERelativeCellRef*)arg1 ;
-(id)initWithCellRef:(const TSCECellRef*)arg1 columnIsAbsolute:(BOOL)arg2 rowIsAbsolute:(BOOL)arg3 ;
-(TSCECellRef)cellRefForHostCoord:(TSUCellCoord)arg1 ;
-(void)setCellReference:(SCD_Struct_TS361*)arg1 ;
-(void)setColumnIsAbsolute:(BOOL)arg1 ;
-(void)setRowIsAbsolute:(BOOL)arg1 ;
-(double)durationValue;
-(id)initWithDuration:(double)arg1 units:(int)arg2 ;
-(BOOL)hasRelativeCellRef;
-(id)initWithRelativeCellRef:(const TSCERelativeCellRef*)arg1 ;
-(BOOL)columnIsAbsolute;
-(BOOL)rowIsAbsolute;
-(const TSCERelativeCellRef*)relativeCellRef;
-(id)initWithCellReference:(SCD_Struct_TS361*)arg1 columnIsAbsolute:(BOOL)arg2 rowIsAbsolute:(BOOL)arg3 ;
-(SCD_Struct_TS361*)cellReference;
-(SCD_Struct_TS361*)cellReferenceForHostCoord:(TSUCellCoord)arg1 ;
-(void)setCellReference:(SCD_Struct_TS361*)arg1 columnIsAbsolute:(BOOL)arg2 rowIsAbsolute:(BOOL)arg3 ;
-(void)setDurationValue:(double)arg1 ;
-(void)setDurationUnits:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 atHostCoord:(TSUCellCoord)arg2 ;
-(TSCEFormulaCreator)formulaCreatorForPredArgAtHostCell:(const TSUCellCoord*)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)boolValue;
-(int)type;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithBool:(BOOL)arg1 ;
-(id)initWithDouble:(double)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ;
-(int)durationUnits;
-(id)initWithDate:(id)arg1 ;
-(id)initWithNumber:(id)arg1 ;
-(double)numberValue;
-(NSNumber *)number;
-(void)setNumber:(NSNumber *)arg1 ;
-(void)setNumberValue:(double)arg1 ;
@end

