/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDMatchingAlgorithmMatch
@property (nonatomic,readonly) long long matchCost; 
@property (nonatomic,readonly) id incomingMatchObject; 
@property (nonatomic,readonly) id outgoingMatchObject; 
@required
-(long long)matchCost;
-(long long)compareToMatch:(id)arg1;
-(BOOL)conflictsWithMatch:(id)arg1;
-(id)incomingMatchObject;
-(id)outgoingMatchObject;

@end

