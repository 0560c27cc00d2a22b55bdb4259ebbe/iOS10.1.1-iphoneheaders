/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CXCallDirectoryEntryData.h>

@class NSMutableData, NSMutableDictionary;

@interface CXCallDirectoryIdentificationEntryData : CXCallDirectoryEntryData {

	NSMutableData* _phoneNumberData;
	NSMutableData* _labelData;
	NSMutableDictionary* _labelToLabelDataOffset;

}

@property (nonatomic,retain) NSMutableData * phoneNumberData;                           //@synthesize phoneNumberData=_phoneNumberData - In the implementation block
@property (nonatomic,retain) NSMutableData * labelData;                                 //@synthesize labelData=_labelData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * labelToLabelDataOffset;              //@synthesize labelToLabelDataOffset=_labelToLabelDataOffset - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(NSMutableData *)phoneNumberData;
-(NSMutableData *)labelData;
-(NSMutableDictionary *)labelToLabelDataOffset;
-(BOOL)appendPhoneNumber:(long long)arg1 label:(id)arg2 ;
-(long long)phoneNumberAtIndex:(unsigned long long)arg1 ;
-(const char*)utf8LabelAtIndex:(unsigned long long)arg1 length:(out unsigned short*)arg2 ;
-(void)setPhoneNumberData:(NSMutableData *)arg1 ;
-(void)setLabelData:(NSMutableData *)arg1 ;
-(void)setLabelToLabelDataOffset:(NSMutableDictionary *)arg1 ;
@end

