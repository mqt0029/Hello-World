import java.util.logging.*;

class Hello
{
    private static final Logger logger = Logger.getLogger( Hello.class.getName() );

    public static void main( String[] args ) 
    {
        try 
        {
            logger.info( "Hello World!" );
        } 
        catch (Exception e) 
        {
            logger.log( Level.SEVERE, "Exception occur", e );
        }
    }
}