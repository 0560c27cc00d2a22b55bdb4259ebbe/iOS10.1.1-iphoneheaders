/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray, NSDate;

@interface ASResolveRecipientsTask : ASTask {

	NSArray* _emailAddresses;
	BOOL _retrieveCertificates;
	BOOL _retrieveAvailability;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (assign,nonatomic) BOOL retrieveCertificates;              //@synthesize retrieveCertificates=_retrieveCertificates - In the implementation block
@property (assign,nonatomic) BOOL retrieveAvailability;              //@synthesize retrieveAvailability=_retrieveAvailability - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                       //@synthesize endTime=_endTime - In the implementation block
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)initForCertificatesWithEmailAddresses:(id)arg1 ;
-(id)_roundDownTo30MinuteBoundary:(id)arg1 ;
-(id)_roundUpTo30MinuteBoundary:(id)arg1 ;
-(BOOL)retrieveCertificates;
-(BOOL)retrieveAvailability;
-(long long)responseStatusForExchangeStatus:(int)arg1 ;
-(long long)certStatusForExchangeStatus:(int)arg1 ;
-(long long)availabilityStatusForExchangeStatus:(int)arg1 ;
-(id)initFreeBusyQueryWithStartDate:(id)arg1 endDate:(id)arg2 emailAddresses:(id)arg3 ;
-(void)setRetrieveCertificates:(BOOL)arg1 ;
-(void)setRetrieveAvailability:(BOOL)arg1 ;
-(void)finishWithError:(id)arg1 ;
@end

