//
//  AvatarParticle.cpp
//  ofxKinect_ofxCv
//
//  Created by Ben McChesney on 5/23/13.
//
//

#include "AvatarParticle.h"

void AvatarParticle::setup ( float _x , float _y , int _frameLife , float _inertiaX , float _inertiaY )
{
    x = _x ;
    y = _y ; //= ofVec2f( _x , _y ) ;
    frameLife = _frameLife ;
    inertiaX = _inertiaX ;
    inertiaY = _inertiaY ;
}

void AvatarParticle::update ( )
{
    frameLife-- ;
    x += inertiaX ;
    y += inertiaY ;
    
    
}

void AvatarParticle::draw( )
{
    ofCircle( x , y , 4 ) ;
}
