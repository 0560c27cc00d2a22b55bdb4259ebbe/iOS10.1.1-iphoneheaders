/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class NSString, TIKeyboardLayout, NSArray;

@interface TITypologyRecordReplacements : TITypologyRecord {

	NSString* _string;
	TIKeyboardLayout* _keyLayout;
	NSArray* _candidates;

}

@property (nonatomic,copy) NSString * string;                           //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;              //@synthesize keyLayout=_keyLayout - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                      //@synthesize candidates=_candidates - In the implementation block
-(void)applyToStatistic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(NSArray *)candidates;
-(TIKeyboardLayout *)keyLayout;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
-(void)setCandidates:(NSArray *)arg1 ;
-(id)shortDescription;
@end

