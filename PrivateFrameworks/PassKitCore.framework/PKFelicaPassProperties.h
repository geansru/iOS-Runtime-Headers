/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKFelicaPassProperties : PKTransitPassProperties <NSCopying, NSSecureCoding> {
    bool  _balanceAllowedForCommute;
    NSString * _greenCarDestinationStation;
    NSString * _greenCarOriginStation;
    bool  _greenCarTicketUsed;
    NSDateComponents * _greenCarValidityStartDate;
    bool  _hasGreenCarTicket;
    bool  _hasShinkansenTicket;
    bool  _inShinkansenStation;
    bool  _lowBalanceGateNotificationEnabled;
    NSDateComponents * _shinkansenArrivalTime;
    NSNumber * _shinkansenCarNumber;
    NSDateComponents * _shinkansenDepartureTime;
    NSString * _shinkansenDestinationStation;
    NSString * _shinkansenOriginStation;
    NSNumber * _shinkansenSeatNumber;
    NSNumber * _shinkansenSeatRow;
    NSDateComponents * _shinkansenSecondaryArrivalTime;
    NSNumber * _shinkansenSecondaryCarNumber;
    NSDateComponents * _shinkansenSecondaryDepartureTime;
    NSString * _shinkansenSecondaryDestinationStation;
    NSString * _shinkansenSecondaryOriginStation;
    NSNumber * _shinkansenSecondarySeatNumber;
    NSNumber * _shinkansenSecondarySeatRow;
    NSString * _shinkansenSecondaryTrainName;
    bool  _shinkansenTicketActive;
    NSString * _shinkansenTrainName;
    NSDateComponents * _shinkansenValidityStartDate;
    NSNumber * _shinkansenValidityTerm;
}

@property (getter=isBalanceAllowedForCommute, nonatomic) bool balanceAllowedForCommute;
@property (nonatomic, copy) NSString *greenCarDestinationStation;
@property (nonatomic, copy) NSString *greenCarOriginStation;
@property (getter=isGreenCarTicketUsed, nonatomic) bool greenCarTicketUsed;
@property (nonatomic, copy) NSDateComponents *greenCarValidityStartDate;
@property (nonatomic) bool hasGreenCarTicket;
@property (nonatomic) bool hasShinkansenTicket;
@property (getter=isInShinkansenStation, nonatomic) bool inShinkansenStation;
@property (getter=isLowBalanceGateNotificationEnabled, nonatomic) bool lowBalanceGateNotificationEnabled;
@property (nonatomic, copy) NSDateComponents *shinkansenArrivalTime;
@property (nonatomic, copy) NSNumber *shinkansenCarNumber;
@property (nonatomic, copy) NSDateComponents *shinkansenDepartureTime;
@property (nonatomic, copy) NSString *shinkansenDestinationStation;
@property (nonatomic, copy) NSString *shinkansenOriginStation;
@property (nonatomic, copy) NSNumber *shinkansenSeatNumber;
@property (nonatomic, copy) NSNumber *shinkansenSeatRow;
@property (nonatomic, copy) NSDateComponents *shinkansenSecondaryArrivalTime;
@property (nonatomic, copy) NSNumber *shinkansenSecondaryCarNumber;
@property (nonatomic, copy) NSDateComponents *shinkansenSecondaryDepartureTime;
@property (nonatomic, copy) NSString *shinkansenSecondaryDestinationStation;
@property (nonatomic, copy) NSString *shinkansenSecondaryOriginStation;
@property (nonatomic, copy) NSNumber *shinkansenSecondarySeatNumber;
@property (nonatomic, copy) NSNumber *shinkansenSecondarySeatRow;
@property (nonatomic, copy) NSString *shinkansenSecondaryTrainName;
@property (getter=isShinkansenTicketActive, nonatomic) bool shinkansenTicketActive;
@property (nonatomic, copy) NSString *shinkansenTrainName;
@property (nonatomic, copy) NSDateComponents *shinkansenValidityStartDate;
@property (nonatomic, copy) NSNumber *shinkansenValidityTerm;

+ (id)passPropertiesForPass:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringForRow:(id)arg1 seat:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayableShinkansenSeat;
- (id)displayableShinkansenSecondarySeat;
- (void)encodeWithCoder:(id)arg1;
- (id)greenCarDestinationStation;
- (id)greenCarOriginStation;
- (id)greenCarValidityStartDate;
- (bool)hasGreenCarTicket;
- (bool)hasShinkansenTicket;
- (id)initWithCoder:(id)arg1;
- (id)initWithFelicaAppletState:(id)arg1 paymentApplication:(id)arg2;
- (id)initWithTransitAppletState:(id)arg1 paymentApplication:(id)arg2;
- (bool)isBalanceAllowedForCommute;
- (bool)isGreenCarTicketUsed;
- (bool)isInShinkansenStation;
- (bool)isLowBalanceGateNotificationEnabled;
- (bool)isShinkansenTicketActive;
- (void)setBalanceAllowedForCommute:(bool)arg1;
- (void)setGreenCarDestinationStation:(id)arg1;
- (void)setGreenCarOriginStation:(id)arg1;
- (void)setGreenCarTicketUsed:(bool)arg1;
- (void)setGreenCarValidityStartDate:(id)arg1;
- (void)setHasGreenCarTicket:(bool)arg1;
- (void)setHasShinkansenTicket:(bool)arg1;
- (void)setInShinkansenStation:(bool)arg1;
- (void)setLowBalanceGateNotificationEnabled:(bool)arg1;
- (void)setShinkansenArrivalTime:(id)arg1;
- (void)setShinkansenCarNumber:(id)arg1;
- (void)setShinkansenDepartureTime:(id)arg1;
- (void)setShinkansenDestinationStation:(id)arg1;
- (void)setShinkansenOriginStation:(id)arg1;
- (void)setShinkansenSeatNumber:(id)arg1;
- (void)setShinkansenSeatRow:(id)arg1;
- (void)setShinkansenSecondaryArrivalTime:(id)arg1;
- (void)setShinkansenSecondaryCarNumber:(id)arg1;
- (void)setShinkansenSecondaryDepartureTime:(id)arg1;
- (void)setShinkansenSecondaryDestinationStation:(id)arg1;
- (void)setShinkansenSecondaryOriginStation:(id)arg1;
- (void)setShinkansenSecondarySeatNumber:(id)arg1;
- (void)setShinkansenSecondarySeatRow:(id)arg1;
- (void)setShinkansenSecondaryTrainName:(id)arg1;
- (void)setShinkansenTicketActive:(bool)arg1;
- (void)setShinkansenTrainName:(id)arg1;
- (void)setShinkansenValidityStartDate:(id)arg1;
- (void)setShinkansenValidityTerm:(id)arg1;
- (id)shinkansenArrivalTime;
- (id)shinkansenCarNumber;
- (id)shinkansenDepartureTime;
- (id)shinkansenDestinationStation;
- (id)shinkansenOriginStation;
- (id)shinkansenSeatNumber;
- (id)shinkansenSeatRow;
- (id)shinkansenSecondaryArrivalTime;
- (id)shinkansenSecondaryCarNumber;
- (id)shinkansenSecondaryDepartureTime;
- (id)shinkansenSecondaryDestinationStation;
- (id)shinkansenSecondaryOriginStation;
- (id)shinkansenSecondarySeatNumber;
- (id)shinkansenSecondarySeatRow;
- (id)shinkansenSecondaryTrainName;
- (id)shinkansenTrainName;
- (id)shinkansenValidityStartDate;
- (id)shinkansenValidityTerm;

@end
