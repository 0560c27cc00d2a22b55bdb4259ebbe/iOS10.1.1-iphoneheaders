/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKDocumentSample.h>

@class HKCDADocument;

@interface HKCDADocumentSample : HKDocumentSample {

	long long _omittedContentFlags;
	HKCDADocument* _document;

}

@property (readonly) HKCDADocument * document;              //@synthesize document=_document - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_globStringToRegexString:(id)arg1 ;
+(BOOL)_isValidCDAKeyPath:(id)arg1 ;
+(BOOL)_isValidOperatorType:(unsigned long long)arg1 ;
+(id)_comparisonExpressionForValue:(id)arg1 operatorType:(unsigned long long)arg2 ;
+(id)CDADocumentSampleWithData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 validationError:(id*)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(HKCDADocument *)document;
-(BOOL)prepareForDelivery:(id*)arg1 ;
-(void)_processDocumentData:(id)arg1 extractedFields:(id)arg2 ;
-(BOOL)_validateDocumentContentWithError:(id*)arg1 ;
-(id)_fieldValueForKeyPath:(id)arg1 ;
-(BOOL)_predicateMatchForKeyPath:(id)arg1 operatorType:(unsigned long long)arg2 pattern:(id)arg3 ;
-(id)_validateConfiguration;
-(long long)_omittedContentFlags;
-(void)_applyPropertiesWithOmittedFlags:(long long)arg1 compressedDocumentData:(id)arg2 title:(id)arg3 patientName:(id)arg4 authorName:(id)arg5 custodianName:(id)arg6 ;
-(BOOL)prepareForSaving:(id*)arg1 ;
@end

